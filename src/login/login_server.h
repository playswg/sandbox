/**
 * SWG:ANH Sandbox
 *
 * @copyright   Copyright (c) 2010 The SWG:ANH Team
 * @author      Eric Barr <apathy@swganh.org>
 */

#ifndef SRC_LOGIN_LOGIN_SERVER_H_
#define SRC_LOGIN_LOGIN_SERVER_H_

#include "shared/galaxy_server.h"

namespace sandbox {
namespace login {

class LoginServer : public shared::GalaxyServer {
 public:
  explicit LoginServer(uint16_t port);
  virtual ~LoginServer();

 private:
  LoginServer();
  LoginServer(const LoginServer&);
  LoginServer& operator=(const LoginServer&);

  virtual void onIncoming(const shared::NetworkAddress& address,
    shared::ByteBuffer& message);

  virtual void onUpdate();
  virtual void initializeProtocol();
};

}  // namespace login
}  // namespace sandbox

#endif  // SRC_LOGIN_LOGIN_SERVER_H_
