#pragma once
#include "ofMain.h"

class ParticleVec2 {
public:
    ParticleVec2();
    void update();
    void draw();
    void addForce(ofVec2f force);
<<<<<<< HEAD
    void boundOffwalls();
=======
    void bounceOffWalls();
>>>>>>> tado/master
    
    ofVec2f velocity;
    ofVec2f acceleration;
    ofVec2f position;
    float mass;
    float radius;
    float friction;
};