//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailSupport/MSAttachmentInfo.h>

@interface MUIAttachmentInfo : MSAttachmentInfo
{
    BOOL _isImage;
    BOOL _canBeSentInline;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL canBeSentInline; // @synthesize canBeSentInline=_canBeSentInline;
@property(readonly, nonatomic) BOOL isImage; // @synthesize isImage=_isImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filename:(id)arg2 isImage:(BOOL)arg3 canBeSentInline:(BOOL)arg4;

@end

