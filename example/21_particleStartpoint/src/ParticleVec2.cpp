#include "ParticleVec2.h"

ParticleVec2::ParticleVec2(){
<<<<<<< HEAD
<<<<<<< HEAD
    position.set(ofGetWidth()/2.0,ofGetHeight()/2.0);
    velocity.set(0, 0);
    mass = 1.0;
    radius = 5.0;
    friction = 0.01;

}

void ParticleVec2::update(){
    acceleration = acceleration - velocity * friction;//accelararion -= velocity でも可
    velocity = velocity + acceleration; //velocity +=acceleration; でも可
=======
    position.set(ofGetWidth()/2.0, ofGetHeight()/2.0);
    velocity.set(0, 0);
    acceleration.set(0, 0);
    mass = 1.0;
    radius = 5.0;
    friction = 0.01;
}

void ParticleVec2::update(){
    acceleration -= velocity * friction;
    velocity += acceleration;
>>>>>>> tado/master
=======
    position.set(ofGetWidth()/2.0, ofGetHeight()/2.0);
    velocity.set(0, 0);
    acceleration.set(0, 0);
    mass = 1.0;
    radius = 5.0;
    friction = 0.01;
}

void ParticleVec2::update(){
    acceleration -= velocity * friction;
    velocity += acceleration;
>>>>>>> tado/master
    position += velocity;
    acceleration.set(0, 0);
}

void ParticleVec2::draw(){
<<<<<<< HEAD
<<<<<<< HEAD
    ofCircle(position.x,position.y,radius);
}

void ParticleVec2::addForce(ofVec2f force){
    acceleration += force /mass;
}

void ParticleVec2::boundOffwalls(){
=======
=======
>>>>>>> tado/master
    ofCircle(position.x, position.y, radius);
}

void ParticleVec2::addForce(ofVec2f force){
    acceleration += force / mass;
}

void ParticleVec2::bounceOffWalls(){
<<<<<<< HEAD
>>>>>>> tado/master
=======
>>>>>>> tado/master
    if (position.x < 0) {
        velocity.x *= -1;
        position.x = 0;
    }
    if (position.x > ofGetWidth()) {
        velocity.x *= -1;
        position.x = ofGetWidth();
    }
    if (position.y < 0) {
        velocity.y *= -1;
        position.y = 0;
    }
    if (position.y > ofGetHeight()) {
        velocity.y *= -1;
        position.y = ofGetHeight();
    }
}

<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> tado/master










<<<<<<< HEAD
>>>>>>> tado/master
=======
>>>>>>> tado/master

