/*
 * SWG:ANH Combat Upgrade Sandbox
 *
 * @copyright   Copyright (c) 2010 The SWG:ANH Team
 * @author      Eric Barr <apathy@swganh.org>
**/

#include "shared/player.h"

namespace sandbox {
namespace shared {

Player::Player()
: position_()
, station_id_(0)
, mood_id_(0) {}

const glm::vec3& Player::position() const {
  return position_;
}

void Player::position(const glm::vec3& position) {
  position_ = position;
}

const std::string& Player::stationName() const {
  return station_name_;
}

void Player::stationName(const std::string& name) {
  station_name_ = name;
}

const std::string& Player::locationName() const {
  return location_name_;
}

void Player::locationName(const std::string& name) {
  location_name_ = name;
}

uint8_t Player::mood() const {
  return mood_id_;
}

void Player::mood(uint8_t moodId) {
  mood_id_ = moodId;
}

int Player::stationId() const {
  return station_id_;
}

void Player::stationId(int id) {
  station_id_ = id;
}

}  // namespace sandbox
}  // namespace shared
