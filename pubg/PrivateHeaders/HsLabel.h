//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface HsLabel : UILabel
{
    long long _labelType;	// 8 = 0x8
}

@property(nonatomic) long long labelType; // @synthesize labelType=_labelType;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000101471f6c
- (void)awakeFromNib;	// IMP=0x0000000101471f1c
- (void)setFontWithSize:(double)arg1;	// IMP=0x0000000101471e50
- (void)setCommonSystemMessageLabelStyleAndTheme;	// IMP=0x0000000101471d24
- (void)setSystemMessageLabelItalicStyleAndTheme;	// IMP=0x0000000101471cbc
- (void)setSystemMessageLabelStyleAndTheme;	// IMP=0x0000000101471c4c
- (void)setTimeStampLabelStyleAndTheme;	// IMP=0x0000000101471acc
- (void)setBotsPillHeaderLabelStyleAndTheme;	// IMP=0x0000000101471944
- (void)setBotsPillLabelStyleAndTheme;	// IMP=0x0000000101471748
- (void)setBotsFAQTitleLabelStyleAndTheme;	// IMP=0x000000010147154c
- (void)setConversationNWErrorLabelStyleAndTheme;	// IMP=0x000000010147146c
- (void)setConversationValidationLabelStyleAndTheme;	// IMP=0x00000001014713ac
- (void)setConversationReplyTypeTitleLabelStyleAndTheme;	// IMP=0x0000000101471278
- (void)setImageAttachmentSizeLabelStyleAndTheme;	// IMP=0x0000000101471144
- (void)setDefaultStyleAndTheme;	// IMP=0x0000000101470fcc
- (void)applyStyleAndTheme;	// IMP=0x0000000101470ef4

@end
