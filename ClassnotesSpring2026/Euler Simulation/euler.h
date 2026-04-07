struct PROJECTILE {
    // Independent variables
     double mass;
     double radius;
     double drag_coeff;

     // Dependent variables to be calculated
     double distance;
     double time;
     double height;
    };

void get_distance_euler(PROJECTILE &projectile, double angle, double velocity);