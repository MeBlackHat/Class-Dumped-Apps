//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/PDFCProcessorDelegate-Protocol.h>

@class NSError;

@interface PSPDFCProcessorDelegate : NSObject <PDFCProcessorDelegate>
{
    _Bool _cancelled;
    NSError *_error;
    CDUnknownBlockType _progressBlock;
}

@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (_Bool)isCanceled;
- (void)completion:(_Bool)arg1 destinationFilepath:(id)arg2;
- (void)error:(long long)arg1 errorMessage:(id)arg2;
- (void)progress:(int)arg1 totalPages:(int)arg2;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

