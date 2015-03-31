#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    //line = line.getSmoothed(3);
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255);
    line.draw();
    
//    ofPolyline temp;
//    
//    temp = line.getResampledBySpacing(20);
//    
//    for (int i = 0; i < temp.size(); i++){
//        
//        ofCircle(temp[i].x, temp[i].y, 10);
//        
//    }
//    
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

    line.addVertex(x,y);
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    
    line.clear();
    line.addVertex(x,y);
    
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
