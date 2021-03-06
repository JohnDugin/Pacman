#include "unit.h"

Unit::Unit(int speed, int x, int y, /*std::string image_path,*/ QString name, Directions direction){
    this->_name = name;
    this->_speed = speed;
    this->_x = x;
    this->_y = y;
    this->_alive = true;
    this->_direction = direction;
    if (name == "pacman")
        this->_future_direction = direction;
    else
        this->_future_direction = Directions::sleep;
    this->_last_direction = this->_direction;
}

QString Unit::getName(){
    return _name;
}

int Unit::getSpeed(){
    return _speed;
}

int Unit::getX(){
    return _x;
}

int Unit::getY(){
    return _y;
}

int Unit::getReabilitationTime(){
    return _reabilitation_time;
}

bool Unit::getAlive(){
    return _alive;
}

Unit::Directions Unit::getDirection(){
    return _direction;
}

Unit::Directions Unit::getFutureDirection(){
    return _future_direction;
}

Unit::Directions Unit::getLastDirection(){
    return _last_direction;
}

void Unit::setSpeed(int speed){
    _speed = speed;
}

void Unit::setX(int x){
    _x = x;
}

void Unit::setY(int y){
    _y = y;
}

void Unit::setReabilitationTime(int time){
    _reabilitation_time = time;
}

void Unit::setAlive(bool flag){
    _alive = flag;
}

void Unit::setDirection(Unit::Directions direction){
    _direction = direction;
}

void Unit::setFutureDirection(Unit::Directions future_direction){
    _future_direction = future_direction;
}

void Unit::setLastDirection(Unit::Directions last_direction){
    _last_direction = last_direction;
}
