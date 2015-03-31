#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    panel.setup("shape", "settings.xml", 510, 10);
    
    panel.add(nSpikes.set("nSpikes", 6, 2, 20));
    panel.add(randomSeed.set("randomSeed",0, 0, 1000));
    panel.add(radiusRandomness.set("radiusRandomness", 0.01,0.01,100));
    panel.add(angleRandomness.set("angleRandomness", 0.01,0.01, 3));
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(0);
    ofSeedRandom(randomSeed);
    
    int nPoints = nSpikes;
    float angleDivision = TWO_PI / (float)nPoints;
    ofPoint startingPoint;
    startingPoint.set(250,250);
    float radius = 100;
    
    ofNoFill();
    
    ofPolyline line;
    
    
    for (int i = 0; i < nPoints; i++){
        
        float angle = angleDivision * i;
        float radiusAddition = ofRandom(-radiusRandomness, radiusRandomness);
        float randomAngle = ofRandom(-angleRandomness, angleRandomness);
        
        angle = angle + randomAngle;
        
        ofPoint pos = startingPoint + (radius+radiusAddition) * ofPoint( cos(angle), sin(angle));
    
        line.addVertex(pos);
        
    }
    
    line.close();
    line = line.getResampledBySpacing(2);
    line = line.getSmoothed(33);
    
    line.draw();
    
    
    
    panel.draw();
    
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
