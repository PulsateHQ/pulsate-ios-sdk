# PULImageCache

A lightweight custom image caching solution for the Pulsate iOS SDK. This provides memory and disk caching for images, removing the dependency on SDWebImage.

## Features

- Memory caching using NSCache
- Persistent disk caching
- Background image downloading
- UIImageView extension for easy implementation
- Cache management (clear memory, clear all)
- Automatic cache cleanup on memory warnings

## How to Use

### Basic Image Loading

```swift
// Load an image from a URL
let imageCache = PULImageCache.shared
imageCache.loadImage(fromURL: url, withKey: "unique_key") { image in
    if let image = image {
        // Use the image
    }
}

// Load an image from local resources or bundle
let bundleImage = imageCache.loadImageFromCache(withFileName: "image_name")
```

### UIImageView Extension

```swift
// Load an image from a URL with a placeholder
imageView.pul_setImage(withURL: url, 
                       placeholder: UIImage(named: "placeholder"), 
                       completion: { image in
    // Image loading finished
})

// Load an image from local cache
imageView.pul_setImage(withFileName: "image_name", 
                       placeholder: UIImage(named: "placeholder"))

// Cancel ongoing image download
imageView.pul_cancelImageLoad()
```

### Managing the Cache

```swift
// Clear memory cache only
PULImageCache.clearMemoryCaches()

// Clear both memory and disk cache
PULImageCache.clearAllCaches()

// Remove a specific image
PULImageCache.shared.removeImage(forKey: "unique_key")

// Check if an image exists in cache
let exists = PULImageCache.shared.imageExists(forKey: "unique_key")
```

## Implementation Details

- The cache uses a thread-safe approach with a dedicated serial queue for disk operations
- Memory cache is automatically cleared when receiving memory warnings
- Images are saved to disk using either JPEG (with 80% quality) or PNG format
- Downloaded images are stored in both memory and disk cache
- The disk cache is stored in the Documents directory in a folder named "PULImageCache" 