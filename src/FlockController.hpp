#include "ofMain.h"
#include "Boid.hpp"

class FlockController {
public:
    FlockController();
    
    void applyForces( float zoneRadius, float separateThreshold=0.4, float alignThreshold=0.7, float separateStr=0.01, float alignStr=0.005, float attractStr=0.03 );
    
    void addParticle( int numParticles=1 );
    void update();
    void draw();
    
    vector<Boid>    boidList;
};
