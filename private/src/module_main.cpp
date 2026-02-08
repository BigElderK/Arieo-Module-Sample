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
            Sample sample_instance;
            Sample2 sample_instance_2;
            // Interface::ISample sample_interface;

            DllLoader()
            {
                // sample_interface.doSomthing_1.bind(&sample_instance, &Sample::doSomthing_1);
                // sample_interface.doSomthing_2.bind(&sample_instance, &Sample::doSomthing_2);
        
                // Core::ModuleManager::registerInterface<Interface::ISample>(
                //     "sample_1", 
                //     &sample_interface
                // );
                Core::ModuleManager::registerInterface<Interface::Sample::ISample>(
                    "sample_2", 
                    &sample_instance_2
                );
            }

            ~DllLoader()
            {
                // Core::ModuleManager::unregisterInterface<Interface::ISample>(
                //     &sample_interface
                // );
                Core::ModuleManager::unregisterInterface<Interface::Sample::ISample>(
                    &sample_instance_2
                );
            }
        } dll_loader;
    }
    //*/
}