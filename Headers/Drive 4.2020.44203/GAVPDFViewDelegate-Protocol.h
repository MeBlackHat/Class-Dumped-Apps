//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFViewDelegate-Protocol.h"

@class GAVPDFView, PDFAnnotation, PDFPage;

@protocol GAVPDFViewDelegate <PDFViewDelegate>
- (void)PDFViewDidReceiveTap:(GAVPDFView *)arg1;

@optional
- (_Bool)PDFView:(GAVPDFView *)arg1 didReceiveTapAtPage:(PDFPage *)arg2;
- (_Bool)PDFView:(GAVPDFView *)arg1 didReceiveTapForAnnotation:(PDFAnnotation *)arg2;
@end

