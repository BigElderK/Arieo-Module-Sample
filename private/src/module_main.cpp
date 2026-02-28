#include "base/prerequisites.h"
#include "core/core.h"

#include "sample.h"
namespace Arieo
{
    GENERATOR_MODULE_ENTRY_FUN()
    ARIEO_DLLEXPORT void ModuleMain()
    {
        Core::Logger::setDefaultLogger("sample_module");
        Core::Logger::trace("hello from sample module");

        static struct DllLoader
        {
            Base::Instance<Sample> sample_instance;
            Base::Instance<Sample2> sample_instance_2;
            // Interface::ISample sample_interface;

            DllLoader()
            {
                // sample_interface.doSomthing_1.bind(&sample_instance, &Sample::doSomthing_1);
                // sample_interface.doSomthing_2.bind(&sample_instance, &Sample::doSomthing_2);
        
                // Core::ModuleManager::registerInterface<Interface::ISample>(
                //     "sample_1", 
                //     &sample_interface
                // );
                Core::ModuleManager::registerInstance<Interface::Sample::ISample, Sample2>(
                    "sample_2", 
                    sample_instance_2
                );
            }

            ~DllLoader()
            {
                // Core::ModuleManager::unregisterInterface<Interface::ISample>(
                //     &sample_interface
                // );
                Core::ModuleManager::unregisterInstance<Interface::Sample::ISample, Sample2>(
                    sample_instance_2
                );
            }
        } dll_loader;
    }
    //*/
}




