#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(0);
    ofSeedRandom(mouseX);
    
    int nPoints = 6;
    float angleDivision = TWO_PI / (float)nPoints;
    ofPoint startingPoint;
    startingPoint.set(250,250);
    float radius = 100;
    
    ofNoFill();
    
    ofPolyline line;
    
    
    for (int i = 0; i < nPoints; i++){
        
        float angle = angleDivision * i;
        float radiusAddition = ofRandom(-30,30);
        float randomAngle = ofRandom(-0.3, 0.3);
        
        angle = angle + randomAngle;
        
        ofPoint pos = startingPoint + (radius+radiusAddition) * ofPoint( cos(angle), sin(angle));
    
        line.addVertex(pos);
        
    }
    
    line.close();
    line = line.getResampledBySpacing(2);
    line = line.getSmoothed(33);
    
    line.draw();
    
    
    
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
