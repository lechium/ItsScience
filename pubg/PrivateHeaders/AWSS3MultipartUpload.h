//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3Initiator, AWSS3Owner, NSDate, NSString;

@interface AWSS3MultipartUpload : AWSModel
{
    NSDate *_initiated;	// 8 = 0x8
    AWSS3Initiator *_initiator;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    AWSS3Owner *_owner;	// 32 = 0x20
    long long _storageClass;	// 40 = 0x28
    NSString *_uploadId;	// 48 = 0x30
}

+ (id)storageClassJSONTransformer;	// IMP=0x0000000100c0af7c
+ (id)ownerJSONTransformer;	// IMP=0x0000000100c0af38
+ (id)initiatorJSONTransformer;	// IMP=0x0000000100c0aef4
+ (id)initiatedJSONTransformer;	// IMP=0x0000000100c0ae94
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0ada0
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(nonatomic) long long storageClass; // @synthesize storageClass=_storageClass;
@property(retain, nonatomic) AWSS3Owner *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) AWSS3Initiator *initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) NSDate *initiated; // @synthesize initiated=_initiated;
- (void).cxx_destruct;	// IMP=0x0000000100c0b1e0

@end
