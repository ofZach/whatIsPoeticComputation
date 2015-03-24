

#pragma once

#include "ofMain.h"

class splitSquare {
    
    public:
    
    float x;
    float y;
    float w;
    float h;
    
    void setup( float _x, float _y, float _w, float _h);
    void draw();
    
    ofColor color;

    vector < splitSquare > childen;
    
    void isClicked( int mPosX, int mPosY );
    
    
};

// vector -> STL  (standard template library)
// template -> C++ crazy thing   < > 
//