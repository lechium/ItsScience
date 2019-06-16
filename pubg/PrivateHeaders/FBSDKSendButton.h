//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSDKButton.h"

#import "FBSDKButtonImpressionTracking.h"
#import "FBSDKSharingButton.h"

@class FBSDKMessageDialog, NSString;

@interface FBSDKSendButton : FBSDKButton <FBSDKButtonImpressionTracking, FBSDKSharingButton>
{
    FBSDKMessageDialog *_dialog;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001006fa158
- (void)_share:(id)arg1;	// IMP=0x00000001006fa0dc
- (_Bool)isImplicitlyDisabled;	// IMP=0x00000001006fa084
- (void)configureButton;	// IMP=0x00000001006f9ed0
- (id)impressionTrackingIdentifier;	// IMP=0x00000001006f9ea4
- (id)impressionTrackingEventName;	// IMP=0x00000001006f9e94
- (id)analyticsParameters;	// IMP=0x00000001006f9e8c
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
