//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface GADLocation : NSObject <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    NSDictionary *_dictionaryRepresentation;	// 16 = 0x10
    NSString *_locationDescription;	// 24 = 0x18
    double _latitude;	// 32 = 0x20
    double _longitude;	// 40 = 0x28
    double _accuracy;	// 48 = 0x30
}

@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;	// IMP=0x00000001009c1958
@property(readonly, copy, nonatomic) GADLocation *coarseLocation;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) _Bool isPreciseLocation;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001009c137c
- (unsigned long long)hash;	// IMP=0x00000001009c1300
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001009c1110
@property(readonly, copy, nonatomic) NSString *locationDescription;
- (id)description;	// IMP=0x00000001009c0f90
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001009c0df0
- (id)initWithLocationDescription:(id)arg1;	// IMP=0x00000001009c0d34
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3;	// IMP=0x00000001009c0c90

@end
