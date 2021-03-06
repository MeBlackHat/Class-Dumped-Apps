//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IFDownloadViewProtocol, SDWebImageOperation;

@interface IFDownloadDescriptor : NSObject
{
    id <SDWebImageOperation> _operation;
    id <SDWebImageOperation> _prefetchOperation;
    NSObject<IFDownloadViewProtocol> *_view;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<IFDownloadViewProtocol> *view; // @synthesize view=_view;
@property(retain, nonatomic) id <SDWebImageOperation> prefetchOperation; // @synthesize prefetchOperation=_prefetchOperation;
@property(retain, nonatomic) id <SDWebImageOperation> operation; // @synthesize operation=_operation;
- (void)cancelOperations;

@end

