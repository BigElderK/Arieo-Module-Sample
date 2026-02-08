#include "base/prerequisites.h"
#include "core/logger/logger.h"

#define ARIEO_DLL_EXPORTS
#include "sample.h"
namespace Arieo
{
    int Sample::doSomthing_1(int i1, int i2)
    {
        return i1 + i2;
    }

    int Sample::doSomthing_2(int i1, int i2)
    {
        return i1 * i2;
    }

    int Sample2::doSomthing_1(int i1, int i2)
    {
        return i1 + i2;
    }

    int Sample2::doSomthing_2(int i1, int i2)
    {
        return i1 * i2;
    }

    /*
    int Interface::ISample3::doSomthing_1(int i1, int i2)
    {
        return i1 + i2;
    }

    int Interface::ISample3::doSomthing_2(int i1, int i2)
    {
        return i1 * i2;
    }
    */
}