//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithExternalResponseProcessor.h>

@class NSString;

@interface TFSTwitterAPIListsCreateCommand : TFSTwitterAPICommandWithExternalResponseProcessor
{
    NSString *_listName;
    NSString *_listDescription;
    long long _listMode;
}

@property(nonatomic) long long listMode; // @synthesize listMode=_listMode;
@property(retain, nonatomic) NSString *listDescription; // @synthesize listDescription=_listDescription;
@property(retain, nonatomic) NSString *listName; // @synthesize listName=_listName;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 name:(id)arg3 description:(id)arg4 mode:(long long)arg5 responseModelBuilder:(id)arg6 responseProcessorBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end

