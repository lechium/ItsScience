//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

@interface UIApplication (HsApplicationDelegate)
+ (void)swizzleApplicationDelegatesForPush;	// IMP=0x000000010133ffa4
+ (void)swizzleApplicationDelegatesForBackgroundSessions;	// IMP=0x000000010133fdc0
- (void)application:(id)arg1 hsHandleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010134106c
- (void)application:(id)arg1 hsHandleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000101341068
- (void)application:(id)arg1 hsHandleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000101341064
- (void)application:(id)arg1 hsDidRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;	// IMP=0x0000000101341060
- (void)application:(id)arg1 hsDidReceiveRemoteNotification:(id)arg2;	// IMP=0x000000010134105c
- (void)application:(id)arg1 hsDidReceiveLocalNotification:(id)arg2;	// IMP=0x0000000101341058
- (void)setHelpshiftBackgroundSessionDelegate:(id)arg1;	// IMP=0x0000000101340f84
- (void)setHelpshiftDelegate:(id)arg1;	// IMP=0x0000000101340d68
@end
