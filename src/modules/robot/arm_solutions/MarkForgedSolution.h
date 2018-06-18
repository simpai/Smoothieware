#pragma once

#include "libs/Module.h"
#include "libs/Kernel.h"
#include "BaseSolution.h"
#include "libs/nuts_bolts.h"

#include "libs/Config.h"

class MarkForgedSolution : public BaseSolution {
    public:
        MarkForgedSolution();
        MarkForgedSolution(Config*) {};
        void cartesian_to_actuator(const float[], ActuatorCoordinates & ) const override;
        void actuator_to_cartesian(const ActuatorCoordinates &, float[] ) const override;
};
