//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSNumber, NSString;

@interface AWSS3ListPartsRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSNumber *_maxParts;	// 24 = 0x18
    NSNumber *_partNumberMarker;	// 32 = 0x20
    long long _requestPayer;	// 40 = 0x28
    NSString *_uploadId;	// 48 = 0x30
}

+ (id)requestPayerJSONTransformer;	// IMP=0x0000000100c0a514
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0a420
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSNumber *partNumberMarker; // @synthesize partNumberMarker=_partNumberMarker;
@property(retain, nonatomic) NSNumber *maxParts; // @synthesize maxParts=_maxParts;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100c0a6c0

@end
