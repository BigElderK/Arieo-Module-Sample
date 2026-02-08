#pragma once
#include "interface/sample/sample.h"

namespace Arieo
{
    class Sample
    {
    public:
        int doSomthing_1(int i1, int i2);
        int doSomthing_2(int i1, int i2);
    };

    class Sample2
        : public Interface::Sample::ISample
    {
    public:
        int doSomthing_1(int i1, int i2) override final;
        int doSomthing_2(int i1, int i2) override final;
    };
}