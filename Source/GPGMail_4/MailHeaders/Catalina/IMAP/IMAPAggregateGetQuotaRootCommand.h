//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAPAggregateCommand.h>

@interface IMAPAggregateGetQuotaRootCommand : IMAPAggregateCommand
{
}

- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)shouldSendAgainOnError;
- (id)activityString;
- (id)commandTypeString;

@end

