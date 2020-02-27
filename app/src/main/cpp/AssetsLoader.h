//
// Created by sergio on 2/14/2020.
//

#ifndef NATIVE_ACTIVITY_ASSETSLOADER_H
#define NATIVE_ACTIVITY_ASSETSLOADER_H

#include <android/asset_manager.h>
extern int assets;
extern AAssetManager *mgr;
class Loader{
public:
    
     char* LoadtoChar(char* filePath){
        AAsset* file = AAssetManager_open(mgr,
                                          "shaders/tri.vert.spv", AASSET_MODE_BUFFER);
        size_t fileLength = AAsset_getLength(file);
        char* fileContent = new char[fileLength];
        AAsset_read(file, fileContent, fileLength);
        return fileContent;
    }
};


#endif //NATIVE_ACTIVITY_ASSETSLOADER_H
