/**
 * Copyright Soramitsu Co., Ltd. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef KAGOME_NETWORK_MOCK_HPP
#define KAGOME_NETWORK_MOCK_HPP

#include "p2p/network/network.hpp"

#include <gmock/gmock.h>

namespace libp2p::network {
  struct NetworkMock : public Network {
    ~NetworkMock() override = default;

    MOCK_METHOD1(closeConnections, void(const peer::PeerId &));

    MOCK_METHOD0(getDialer, Dialer &());

    MOCK_METHOD0(getListener, ListenerManager &());

    MOCK_METHOD0(getConnectionManager, ConnectionManager &());
  };
}  // namespace libp2p::network

#endif  // KAGOME_NETWORK_MOCK_HPP
