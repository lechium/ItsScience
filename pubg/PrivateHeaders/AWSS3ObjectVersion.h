//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3Owner, NSDate, NSNumber, NSString;

@interface AWSS3ObjectVersion : AWSModel
{
    NSString *_ETag;	// 8 = 0x8
    NSNumber *_isLatest;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    NSDate *_lastModified;	// 32 = 0x20
    AWSS3Owner *_owner;	// 40 = 0x28
    NSNumber *_size;	// 48 = 0x30
    long long _storageClass;	// 56 = 0x38
    NSString *_versionId;	// 64 = 0x40
}

+ (id)storageClassJSONTransformer;	// IMP=0x0000000100c0c1ec
+ (id)ownerJSONTransformer;	// IMP=0x0000000100c0c1a8
+ (id)lastModifiedJSONTransformer;	// IMP=0x0000000100c0c148
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0c02c
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(nonatomic) long long storageClass; // @synthesize storageClass=_storageClass;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) AWSS3Owner *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSNumber *isLatest; // @synthesize isLatest=_isLatest;
@property(retain, nonatomic) NSString *ETag; // @synthesize ETag=_ETag;
- (void).cxx_destruct;	// IMP=0x0000000100c0c3e0

@end
