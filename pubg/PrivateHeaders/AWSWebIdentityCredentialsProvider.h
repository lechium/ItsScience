//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AWSCredentialsProvider.h"

@class AWSCredentials, AWSSTS, AWSUICKeyChainStore, NSString;

@interface AWSWebIdentityCredentialsProvider : NSObject <AWSCredentialsProvider>
{
    AWSCredentials *_internalCredentials;	// 8 = 0x8
    NSString *_webIdentityToken;	// 16 = 0x10
    NSString *_roleArn;	// 24 = 0x18
    NSString *_roleSessionName;	// 32 = 0x20
    NSString *_providerId;	// 40 = 0x28
    AWSSTS *_sts;	// 48 = 0x30
    AWSUICKeyChainStore *_keychain;	// 56 = 0x38
}

@property(retain, nonatomic) AWSUICKeyChainStore *keychain; // @synthesize keychain=_keychain;
@property(retain, nonatomic) AWSSTS *sts; // @synthesize sts=_sts;
@property(retain, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(retain, nonatomic) NSString *roleSessionName; // @synthesize roleSessionName=_roleSessionName;
@property(retain, nonatomic) NSString *roleArn; // @synthesize roleArn=_roleArn;
@property(retain, nonatomic) NSString *webIdentityToken; // @synthesize webIdentityToken=_webIdentityToken;
- (void).cxx_destruct;	// IMP=0x0000000100bd01b8
@property(retain, nonatomic) AWSCredentials *internalCredentials; // @synthesize internalCredentials=_internalCredentials;
- (void)invalidateCachedTemporaryCredentials;	// IMP=0x0000000100bcfbcc
- (id)credentials;	// IMP=0x0000000100bcf5d0
- (id)initWithRegionType:(long long)arg1 providerId:(id)arg2 roleArn:(id)arg3 roleSessionName:(id)arg4 webIdentityToken:(id)arg5;	// IMP=0x0000000100bcf39c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
