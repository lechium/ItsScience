//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSCognitoCredentialsProvider, NSDictionary;

@interface AWSInfo : NSObject
{
    NSDictionary *_rootInfoDictionary;	// 8 = 0x8
    AWSCognitoCredentialsProvider *_defaultCognitoCredentialsProvider;	// 16 = 0x10
    long long _defaultRegion;	// 24 = 0x18
}

+ (id)defaultAWSInfo;	// IMP=0x0000000100b7caf8
@property(nonatomic) long long defaultRegion; // @synthesize defaultRegion=_defaultRegion;
@property(retain, nonatomic) AWSCognitoCredentialsProvider *defaultCognitoCredentialsProvider; // @synthesize defaultCognitoCredentialsProvider=_defaultCognitoCredentialsProvider;
@property(retain, nonatomic) NSDictionary *rootInfoDictionary; // @synthesize rootInfoDictionary=_rootInfoDictionary;
- (void).cxx_destruct;	// IMP=0x0000000100b7cd14
- (id)defaultServiceInfo:(id)arg1;	// IMP=0x0000000100b7cc98
- (id)serviceInfo:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100b7cb6c
- (id)init;	// IMP=0x0000000100b7c894

@end
