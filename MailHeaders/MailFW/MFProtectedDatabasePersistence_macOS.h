//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailDaemon/EDProtectedDatabasePersistence.h>

@interface MFProtectedDatabasePersistence_macOS : EDProtectedDatabasePersistence
{
}

+ (id)journalDatabaseName;
+ (id)protectedDatabaseName;
- (BOOL)protectedDataAvailable;
- (BOOL)supportsJournaling;

@end

