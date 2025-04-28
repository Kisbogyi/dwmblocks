# Maintainer: Thule <vincenzo.frascino@proton.me>
# Contributor: Neptune <neptune650@proton.me>
# Contributor: Sergej Pupykin <pupykin.s+arch@gmail.com>
# Contributor: Dag Odenhall <dag.odenhall@gmail.com>
# Contributor: Grigorios Bouzakis <grbzks@gmail.com>

pkgname=dwmblocks_custom
pkgver=6.5.1
pkgrel=1
pkgdesc="bar for dwm"
url="https://github.com/Kisbogyi/dwmblocks"
arch=('i686' 'x86_64' 'arm' 'armv7h' 'armv6h' 'aarch64')
license=('MIT')
options=(zipman)
provides=('dwmblocks')
depends=('libx11')
# install=dwm.install
source=(git+https://github.com/Kisbogyi/dwmblocks)
sha256sums=('SKIP')

prepare() {
	# Its mine so no preparation needed
	:
}

build() {
  cd "$srcdir/dwmblocks"
  make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
  cd "$srcdir/dwmblocks"
  make PREFIX=/usr DESTDIR="$pkgdir" install
}
