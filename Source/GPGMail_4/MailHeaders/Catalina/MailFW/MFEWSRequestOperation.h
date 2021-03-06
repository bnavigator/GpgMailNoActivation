//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MCMonitoredOperation.h>

@class MFEWSGateway, MFEWSResponseOperation;

@interface MFEWSRequestOperation : MCMonitoredOperation
{
    BOOL _isOffline;
    MFEWSResponseOperation *_responseOperation;
    MFEWSGateway *_gateway;
}

@property(retain, nonatomic) MFEWSGateway *gateway; // @synthesize gateway=_gateway;
@property(retain, nonatomic) MFEWSResponseOperation *responseOperation; // @synthesize responseOperation=_responseOperation;
//- (void).cxx_destruct;
- (id)description;
- (void)setupOfflineResponse;
- (void)goOffline;
@property(readonly) BOOL isOffline;
@property(readonly, nonatomic) BOOL isFolderRequest;
- (void)executeOperation;
- (void)main;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)init;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;

@end

