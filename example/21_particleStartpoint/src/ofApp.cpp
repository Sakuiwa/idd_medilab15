#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < NUM ; i++) {
        particle[i].addForce(ofVec2f(0, 1.0));
        particle[i].update();
        particle[i].boundOffwalls();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < NUM; i++){
    particle[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    for (int i = 0; i < NUM; i++){
    particle[i].position.set(x, y);
    particle[i].velocity.set(0, 0);
    float length = ofRandom(20);
    float angle = ofRandom(2.0 * PI);
    float rx = length * cos(angle);
    float ry = length * sin(angle);
    ofVec2f force = ofVec2f(length * cos(angle), length * sin(angle));
    particle[i].addForce(force);
    //particle[i].mass = 10.0;
    //particle[i].acceleration.set(ofRandom(-10, 10), ofRandom(-20, 0));
    //particle[i].addForce(ofVec2f(ofRandom(10, 10), ofRandom(10, 10)));
    }
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
