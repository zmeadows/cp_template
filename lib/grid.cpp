
template <typename T>
bool isSubGrid(const VV<T>& gb, const VV<T>& gs) {
    // test if a smaller grid (gs) is contained within a larger one (gb)
    const I R = gb.size();
    const I C = gb[0].size();
    const I r = gs.size();
    const I c = gs[0].size();

    FORN(i,R-r+1) {
        FORN(j,C-c+1) {
            bool match = true;
            FORN(x,r) {
                FORN(y,c) {
                    if (gb[i+x][j+y] != gs[x][y]) {
                        match = false; break;
                    }
                }
                if (!match) break;
            }

            if (match) return true;
        }
    }

    return false;
}
