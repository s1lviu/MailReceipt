//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class MTMFullWindowController;

@interface MTMOutlineView : NSOutlineView
{
    MTMFullWindowController *_windowController;
}

@property(nonatomic) __weak MTMFullWindowController *windowController; // @synthesize windowController=_windowController;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)selectAll:(id)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;

@end

