#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

    
    for (int i = 0; i < myPts.size(); i++){
        myPts[i].x = myPts[i].x + ofRandom(-1,1);
        myPts[i].y = myPts[i].y + ofRandom(-1,1);
        
        //myPts[i].y *= 0.99;
        //myPts[i].x *= 0.99;
        
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofNoFill();
    ofBeginShape();
    
    
    cout << myPts.size() << endl;
    
    for (int i = 0; i < myPts.size(); i++){
        ofVertex(myPts[i].x, myPts[i].y);
    }
    
    ofEndShape();
    
    
    
    
    
    
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

    
    ofPoint tempPt;
    tempPt.set(x,y);
    myPts.push_back(tempPt);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    //myPts.clear();
    
    ofPoint tempPt;
    tempPt.set(x,y);
    myPts.push_back(tempPt);
    
    
    
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
