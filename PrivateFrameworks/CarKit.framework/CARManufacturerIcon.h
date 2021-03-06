/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARManufacturerIcon : NSObject {
    NSData * _imageData;
    struct CGSize { 
        float width; 
        float height; 
    }  _pixelSize;
    BOOL  _prerendered;
}

@property (nonatomic, readonly, copy) NSData *imageData;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } pixelSize;
@property (getter=isPrerendered, nonatomic, readonly) BOOL prerendered;

- (void).cxx_destruct;
- (id)description;
- (id)imageData;
- (id)initWithPropertySupplier:(id /* block */)arg1;
- (BOOL)isPrerendered;
- (struct CGSize { float x1; float x2; })pixelSize;

@end
