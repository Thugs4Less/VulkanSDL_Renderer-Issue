
#include <windows.h>
#include <sstream>
#include <iostream>
#include "Renderer.h"

#define WIDTH 400
#define HEIGHT 400

#undef main


int main()
{
    Renderer vulkan;
    vulkan.initVulkan();
    vulkan.eventHandler();
    vulkan.deInitVulkan();
    //Sleep(2000);


    return 0;
}

// mingw32-make -f Makefile
//  /home/user/VulkanSDK/x.x.x.x/x86_64/bin/glslc shader.vert -o vert.spv
//  /home/user/VulkanSDK/x.x.x.x/x86_64/bin/glslc shader.frag -o frag.spv


