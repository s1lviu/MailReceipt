//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSPersistenceTaskOperation.h>

@interface MFEWSGetNewMessageActionsOperation : MFEWSPersistenceTaskOperation
{
    id <MFEWSGetNewMessageActionsOperationDelegate> _delegate;
    long long _previousActionID;
}

@property(readonly, nonatomic) long long previousActionID; // @synthesize previousActionID=_previousActionID;
@property(nonatomic) __weak id <MFEWSGetNewMessageActionsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)initWithPreviousActionID:(long long)arg1;

@end
