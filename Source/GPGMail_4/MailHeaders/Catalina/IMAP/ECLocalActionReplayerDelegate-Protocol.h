//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <IMAP/NSObject-Protocol.h>

@class NSData, NSURL;
@protocol ECMessage;

@protocol ECLocalActionReplayerDelegate <NSObject>
- (BOOL)moveSupportedFromMailboxURL:(NSURL *)arg1 toURL:(NSURL *)arg2;
- (NSData *)messageDataForMessage:(id /*<ECMessage>*/)arg1;
@end
