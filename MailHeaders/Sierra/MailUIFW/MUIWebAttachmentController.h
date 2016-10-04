//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCCIDURLProtocolDataProvider.h"
#import "QLPreviewItem.h"

@class MUIWKWebViewController, MUIWebAttachment, NSImage, NSProgress, NSString, NSURL;

@interface MUIWebAttachmentController : NSObject <MCCIDURLProtocolDataProvider, QLPreviewItem>
{
    long long _displayState;
    MUIWebAttachment *_webAttachment;
    MUIWKWebViewController *_controller;
    NSString *_markup;
    NSImage *_cachedSnapshot;
    long long _downloadedState;
    NSProgress *_downloadProgress;
    struct CGRect _cachedFrame;
}

@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) long long downloadedState; // @synthesize downloadedState=_downloadedState;
@property(retain, nonatomic) NSImage *cachedSnapshot; // @synthesize cachedSnapshot=_cachedSnapshot;
@property(nonatomic) struct CGRect cachedFrame; // @synthesize cachedFrame=_cachedFrame;
@property(readonly, nonatomic) NSString *markup; // @synthesize markup=_markup;
@property(nonatomic) __weak MUIWKWebViewController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) MUIWebAttachment *webAttachment; // @synthesize webAttachment=_webAttachment;
- (void).cxx_destruct;
- (void)startDownloadingIfNeededWithProgress:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *mimeType;
@property(readonly) NSURL *cidURL;
- (void)dataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setImageScale:(long long)arg1;
@property(readonly, nonatomic) struct CGRect frameForPreview;
@property(readonly, copy, nonatomic) NSImage *transitionImageForPreview;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
@property(readonly, copy, nonatomic) NSString *deletionScriptString;
@property(readonly, copy, nonatomic) NSString *registrationScriptString;
@property(readonly, nonatomic) BOOL canDisplayInline;
@property(nonatomic) long long displayState;
- (void)_handleDownloadProgress:(id)arg1 changedFractionCompleted:(double)arg2;
- (void)_handleDownloadErrorChange:(id)arg1;
- (void)_handleDownloadFinished;
- (void)_handleUpdateForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithWebAttachment:(id)arg1 controller:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) long long fileSize;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;

@end
