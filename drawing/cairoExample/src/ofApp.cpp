#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    //----------------------------------------------------------- allocate the cairo renderer
    cairo = ofPtr<ofCairoRenderer>(new ofCairoRenderer);
    cairo->setup("", ofCairoRenderer::IMAGE, false, false);     // allocate for 2d graphics
    tex.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
    opengl = ofGetCurrentRenderer();                            // grab the current renderer
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    //--------------------------------------------------------  draw into cairo
    ofSetCurrentRenderer(cairo);
    
    ofClear(0,0,0, 255);                            // <---- we must clear, here we clear full alpha (opaque) black
    ofNoFill();
    ofSetColor(100,100,100);
    ofSetLineWidth(5);
    ofRect(30, 30,100,100);
    
    
    ofSetLineWidth(20);
    ofSetColor(255,255,255,100);                    // transparent line is helpful to see how this works.
    ofPolyline t;
    t.addVertex( 100,100 );
    t.addVertex( 200,100 );
    t.addVertex(mouseX,mouseY);
    t.addVertex( 400,400);
    t.draw();
    
    
    //--------------------------------------------------------  draw into opengl
    ofSetCurrentRenderer(opengl);
    tex.loadData(cairo->getImageSurfacePixels());
    ofSetColor(255,255,255);
    tex.draw(0,0);
    ofDrawBitmapString("press a,s,d to change the line cap, press z,x,c to change the line join", 20,20);
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == 'a'){
        cairo_set_line_cap(cairo->getCairoContext(), CAIRO_LINE_CAP_BUTT);
    }
    
    if (key == 's'){
        cairo_set_line_cap(cairo->getCairoContext(), CAIRO_LINE_CAP_ROUND);
    }
    
    if (key == 'd'){
        cairo_set_line_cap(cairo->getCairoContext(), CAIRO_LINE_CAP_SQUARE);
    }
    
    if (key == 'z'){
        cairo_set_line_join(cairo->getCairoContext(), CAIRO_LINE_JOIN_BEVEL);
    }
    
    if (key == 'x'){
        cairo_set_line_join(cairo->getCairoContext(), CAIRO_LINE_JOIN_MITER);
    }
    
    if (key == 'c'){
        cairo_set_line_join(cairo->getCairoContext(), CAIRO_LINE_JOIN_ROUND);
    }
    
    
    
    
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

    // we need to "reinitialize cairo to the width and height of the current screen"
    cairo->setup("", ofCairoRenderer::IMAGE, false, false);
    
    tex.clear();
    tex.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
