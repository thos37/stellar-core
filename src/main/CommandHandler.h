#pragma once

// Copyright 2014 Stellar Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include <string>
#include "lib/http/server.hpp"

/*
handler functions for the http commands this server supports
*/

namespace stellar
{
class Application;

class CommandHandler
{

    Application& mApp;
    std::unique_ptr<http::server::server> mServer;

  public:
    CommandHandler(Application& app);

    void manualCmd(std::string const& cmd);

    void fileNotFound(std::string const& params, std::string& retStr);

    void catchup(std::string const& params, std::string& retStr);
    void checkpoint(std::string const& params, std::string& retStr);
    void checkdb(std::string const& params, std::string& retStr);
    void connect(std::string const& params, std::string& retStr);
    void generateLoad(std::string const& params, std::string& retStr);
    void info(std::string const& params, std::string& retStr);
    void ll(std::string const& params, std::string& retStr);
    void logRotate(std::string const& params, std::string& retStr);
    void manualClose(std::string const& params, std::string& retStr);
    void metrics(std::string const& params, std::string& retStr);
    void peers(std::string const& params, std::string& retStr);
    void scpInfo(std::string const& params, std::string& retStr);
    void stop(std::string const& params, std::string& retStr);
    void tx(std::string const& params, std::string& retStr);
    void testTx(std::string const& params, std::string& retStr);
};
}
