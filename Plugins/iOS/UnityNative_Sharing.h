//
//  UnityNative_Sharing.h
//
//  Created by Nicholas Sheehan on 01/06/2018.
//

#import "UnityAppController.h"

extern UIViewController* UnityGetGLViewController();

#ifdef __cplusplus
extern "C" {
#endif
    void UnityNative_Sharing_ShareTextAndFile(const char* shareText, const char* filePath);
    void UnityNative_Sharing_ShareText(const char* shareText);
#ifdef __cplusplus
}
#endif
