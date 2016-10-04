//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class CALayer, NSColor, ViewActionForwardingLayerDelegate;

@interface TabBarViewButton : NSButton
{
    NSColor *_backgroundColor;
    BOOL _active;
    BOOL _showsLeftSeparator;
    BOOL _showsRightSeparator;
    BOOL _hasMouseOverHighlight;
    BOOL _mouseOverHighlightShouldIncludeRightBorderFrameWidth;
    BOOL _forcesActiveWindowState;
    ViewActionForwardingLayerDelegate *_layerDelegate;
    CALayer *_backgroundLayer;
    CALayer *_centerLayer;
    CALayer *_leftBorderLayer;
    CALayer *_rightBorderLayer;
    CALayer *_topBorderLayer;
}

+ (Class)cellClass;
@property(readonly, nonatomic) CALayer *topBorderLayer; // @synthesize topBorderLayer=_topBorderLayer;
@property(readonly, nonatomic) CALayer *rightBorderLayer; // @synthesize rightBorderLayer=_rightBorderLayer;
@property(readonly, nonatomic) CALayer *leftBorderLayer; // @synthesize leftBorderLayer=_leftBorderLayer;
@property(readonly, nonatomic) CALayer *centerLayer; // @synthesize centerLayer=_centerLayer;
@property(readonly, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(readonly, nonatomic) ViewActionForwardingLayerDelegate *layerDelegate; // @synthesize layerDelegate=_layerDelegate;
@property(nonatomic) BOOL forcesActiveWindowState; // @synthesize forcesActiveWindowState=_forcesActiveWindowState;
@property(nonatomic) BOOL mouseOverHighlightShouldIncludeRightBorderFrameWidth; // @synthesize mouseOverHighlightShouldIncludeRightBorderFrameWidth=_mouseOverHighlightShouldIncludeRightBorderFrameWidth;
@property(nonatomic) BOOL hasMouseOverHighlight; // @synthesize hasMouseOverHighlight=_hasMouseOverHighlight;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1 withAnimation:(id)arg2;
@property(readonly, nonatomic) BOOL isAnimatingBackgroundColor;
- (void)setHasMouseOverHighlight:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateBackgroundLayerImagesForActiveTab:(BOOL)arg1 inActiveWindow:(BOOL)arg2;
- (void)layout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_windowChangedKeyState;
@property(nonatomic) BOOL showsRightSeparator;
@property(nonatomic) BOOL showsLeftSeparator;
@property(nonatomic) BOOL active;
@property(readonly, nonatomic) double rightCapWidth;
@property(readonly, nonatomic) double leftCapWidth;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (id)initWithFrame:(struct CGRect)arg1;

@end
