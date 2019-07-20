#import "PUBGDefines.h"
#import "PUBGControllerManager.h"
#import <GameController/GameController.h>
#import "NSObject+AssociatedObjects.h"
//#import "FingerTips/MBFingerTipWindow.h"

%hook FMetalDebugRenderCommandEncoder

- (void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3 {

    %log;
    %orig;

}

%end

%hook _GCControllerAxisInput

-(float)value {
    
    //%log;
    float orig = %orig;
    if (orig > 0 || orig < 0){
        return orig*2.5;
        //return orig;
    }
    return %orig;
}

%end

%hook GCController

+ (NSArray<GCController *> *)controllers {

    PUBGControllerManager *man = [PUBGControllerManager sharedManager];
    NSDictionary *gpd = [man controllerPreferences];
    BOOL enabled = [gpd[ExperimentalControl] boolValue];
   // NSArray *callStack = [NSThread callStackSymbols];
   // NSLog(@"callstack: %@", callStack);
    if (enabled) {
        //NSLog(@"no controllers for you!");
        man.gameControllers = %orig;
        return nil;
    }
    return %orig;
}

%end


%hook IOSAppDelegate

- (void)applicationDidBecomeActive:(UIApplication *)application {

    %orig;
    [[PUBGControllerManager sharedManager] appWasActivated];
}



- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {

    %log;
    NSLog(@"PUBC: #### in application:didFinishLaunchingWithOptions");
    PUBGControllerManager *man = [PUBGControllerManager sharedManager];
    [man listenForControllers];
 

    return %orig;

}

%end