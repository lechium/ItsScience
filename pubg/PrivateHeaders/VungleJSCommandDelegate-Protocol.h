//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol VungleJSCommandDelegate <NSObject>
- (void)commandClose;
- (void)commandOpenURL:(NSURL *)arg1;
- (void)commandSetOrientationPropertiesWithForceOrientation:(unsigned long long)arg1;
- (void)commandShouldUseCustomClose:(long long)arg1;
@end
