//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BeaconQimeiSyncHandler : NSObject
{
    double lastQimeiTime;	// 8 = 0x8
}

+ (_Bool)requestQimei;	// IMP=0x00000001007a920c
+ (id)sharedInstance;	// IMP=0x00000001007a9178
@property(nonatomic) double lastQimeiTime; // @synthesize lastQimeiTime;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;	// IMP=0x00000001007a9878
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;	// IMP=0x00000001007a96f8

@end
